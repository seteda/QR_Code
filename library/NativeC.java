
public class NativeC {
	/* make VM aware of function defined external */
	native void printdata(int x, int y);
	/* Description function C */
	static public void main(String[] args){
		NativeC Func_print = new NativeC();
		/* call function from C */
		Func_print.printdata(2,5);
	}
	/* static initial, load native library containing the implementation of functions native method */
	static {
		System.loadLibrary("nativeC");
	}
}
