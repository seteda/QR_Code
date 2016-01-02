package interfaceQR;

import db.*;
import qrNativeC.*;

import java.util.Scanner;

public class User {
	/**
	 * PRIVATE FUNCTIONS
	 */
	private static boolean check_version(int version) {
		if ((version < 1) || (version > qrNativeC.NativeInclude.VERSION_40)) {
			return false;
		} else
			return true;
	}

	private static boolean check_level(int level) {
		if ((level == qrNativeC.NativeInclude.LEVEL_H) || (level == qrNativeC.NativeInclude.LEVEL_L)
				|| (level == qrNativeC.NativeInclude.LEVEL_M) || (level == qrNativeC.NativeInclude.LEVEL_Q)) {
			return true;
		} else
			return false;
	}

	/**
	 * PUBLIC FUNCTIONS
	 */
	public User() {
		System.out.println("This is constructor for User class");
	}

	static private void this_print(int version, int level) {
		NativeClassC ver = new NativeClassC();
		db.Character_capacities Db = new db.Character_capacities();
		Db = ver.getVerQr(version, level);
		Db.printDb();
	}

	static public void main(String[] args){
		int version=0;
		String inLevel;
		/*
		 * Get input information for QR CODE
		 */
		System.out.println("This is main User class");
		System.out.println("Enter version QR: ");
		Scanner scanIn = new Scanner(System.in);
		version = scanIn.nextInt();
		System.out.println("Enter level QR (L,M,H or Q): ");
		inLevel = scanIn.next();
		if (check_version(version)) {
		switch (inLevel) {
		case "l":
		case "L":
			System.out.format("Version: %d Level: %s\n", version, inLevel);
			this_print(version,qrNativeC.NativeInclude.LEVEL_L);
			break;
		case "m":
		case "M":
			System.out.format("Version: %d Level: %s\n", version, inLevel);
			this_print(version,qrNativeC.NativeInclude.LEVEL_M);
			break;
		case "h":
		case "H":
			System.out.format("Version: %d Level: %s\n", version, inLevel);
			this_print(version,qrNativeC.NativeInclude.LEVEL_H);
			break;
		case "q":
		case "Q":
			System.out.format("Version: %d Level: %s\n", version, inLevel);
			this_print(version,qrNativeC.NativeInclude.LEVEL_Q);
			break;
		default:
			System.out.format("Version: %d OR Level: %s not supported!\n", version, inLevel);
			break;
			}
		}
		else{
			System.out.format("Version: %d OR Level: %s not supported!\n", version, inLevel);
		}
		scanIn.close();    
	}
}