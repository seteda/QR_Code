package qrNativeC;

//import qrNativeC.NativeInclude.*;
import db.*;

public class NativeClassC {
	/********************************************************************************** 
	 * static initial, load native library (libNativeInC.so) 
	 * containing the implementation of functions native method 
	 **********************************************************************************/
	static {
		System.loadLibrary("NativeInC");
	}
	/**********************************************************************************
	 * Create constructor for class 
	 **********************************************************************************/
	public NativeClassC(){
		System.out.println("This is constructor for NativeC class");
	}
	/**********************************************************************************
	 * make VM aware of function defined external 
	 **********************************************************************************/
	public native db.Character_capacities getVerQr(int version, int level);
	public native void printdata(int x, int y);
	public native String getLine(String text);
	/* Create template native functions for JNI */
	public native int returnInt(int x);
	public native byte returnByte(int x);
	public native short returnShort(int x);
	public native long returnLong(int x);
	public native double returnDouble(int x);
	public native float returnFloat(int x);
	public native char returnChar(int x);
	public native boolean returnBoolean(int x);
	public native String returnString(String msg);
	public native int[] returnArrayInt(int[] numbers);
	public native byte[] returnArrayByte(byte[] numbers);
	public native short[] returnArrayShort(short[] numbers);
	public native long[] returnArrayLong(long[] numbers);
	public native double[] returnArrayDouble(double[] numbers);
	public native double[] returnArrayDouble(int[] numbers);
	public native float[] returnArrayFloat(float[] numbers);
	public native char[] returnArrayChar(char[] numbers);
	public native boolean[] returnArrayBoolean(boolean[] numbers);
//	public native class returnClass(int x);
	/********************************************************************************** 
	 * Description function C, this main is static, only use in this class 
	 **********************************************************************************/
	static public void main(String[] args){
		NativeClassC Func_print = new NativeClassC();
		db.Character_capacities Db = new db.Character_capacities();
		String out;
		int[] number={10,20,30};
		double[] retArrDouble = new NativeClassC().returnArrayDouble(number);
		/* 
		 * call function from C 
		 */
		System.out.println("\nPRINT DATA FOR VERSION QR");
		Func_print.printdata(qrNativeC.NativeInclude.VERSION_29, qrNativeC.NativeInclude.LEVEL_M);
		
		System.out.println("\nCALLING returnString FUNCTION");
		out = Func_print.returnString("This is message is send from java Native");
		System.out.println("RECEIVED message from C: "+out);
		
		System.out.println("\nCALLING returnArray FUNCTION");
		System.out.println("In java, the sum is: " + retArrDouble[0]);
		System.out.println("In java, the average is: " + retArrDouble[1]);
		
		System.out.println("\nCALLING getVerQr FUNCTION");
		Db = Func_print.getVerQr(qrNativeC.NativeInclude.VERSION_29, qrNativeC.NativeInclude.LEVEL_M);
		Db.printDb();
	}
}
