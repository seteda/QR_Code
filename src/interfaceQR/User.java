package interfaceQR;

import db.*;
import qrNativeC.*;

public class User {
	/* */
	public User(){
		System.out.println("This is constructor for User class");
	}	
	static public void main(String[] args){
		/* call function from C */
		System.out.println("This is main User class");
		this_print();
	}
	static public void this_print(){
		int version, level;
		NativeClassC ver = new NativeClassC();
		version = qrNativeC.NativeInclude.VERSION_10;
		level = qrNativeC.NativeInclude.LEVEL_H;
		System.out.format("Version: %d Level: %d",version,level);
		ver.getVerQr(version, level);
		}
	
}