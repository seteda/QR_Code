package qrNativeC;

public class NativeClassC {
	/*  */
	public NativeClassC(){
		System.out.println("This is constructor for NativeC class");
	}
	/* make VM aware of function defined external */
	native void printdata(int x, int y);
	/* Description function C, this main is static, only use in this class */
	static public void main(String[] args){
		NativeClassC Func_print = new NativeClassC();
		/* call function from C */
		Func_print.printdata(2,5);
	}
	/* static initial, load native library (libNativeInC.so) containing the implementation of functions native method */
	static {
		System.loadLibrary("NativeInC");
	}
}
