###############################################################################################
###################################		GUIDE NAME				 ##############################
###############################################################################################
1. Name of package only include special character: 'abc..123..ABC' or '.', NOT low shift as '_'
###############################################################################################
###################################Create libNativeInC.so######################################
###############################################################################################
# this folder!
cd ~/workspace/QR_CODE/
# Create NativeClassC.class in /bin folder
javac -d src/ src/qrNativeC/NativeClassC.java

# create qr_NativeC_NativeClassC.h in /include folder
# -classpath: directory for class folder
# note: NativeClassC class save in src/qr_nativeC/ folder
javah -d include/ -classpath src/ qrNativeC.NativeClassC

# Create libNativeInC.so to /bin/build/jni/
gcc -fPIC -shared -I/opt/tools/java-jdk/jdk1.8.0_65/include/ src/qr_c/nativeC.c -o build/jni/libNativeInC.so

# run java with C: -Djava.library.path=. follow program find library in current folder
# LD_LIBRARY_PATH: where library is loated
export LD_LIBRARY_PATH=~/workspace/QR_CODE/build/jni/lib
java -classpath ~/workspace/QR_CODE/src qrNativeC.NativeClassC
# if classpath was configued in .classpath, only need run: java qrNativeC.NativeClassC 
###############################################################################################
###################################		GUIDE SPEC				 ##############################
###############################################################################################
1. all src file save in src folder
2. all file *.so save in build/jni/lib folder
###############################################################################################
###################################		GUIDE ECLIPSE				 ##########################
###############################################################################################
1. config run application, add vm configure: -Djava.library.path=build/jni/lib