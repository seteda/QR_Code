package qrNativeC;

public class NativeClassC {
	/*  */
	final short LEVEL_L = 10;
	public NativeClassC(){
		System.out.println("This is constructor for NativeC class");
	}
	/* make VM aware of function defined external */
	private native void printdata(int x, int y);
	private native void getVerQr(int version, int level);
	private native String getLine(String text);
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
