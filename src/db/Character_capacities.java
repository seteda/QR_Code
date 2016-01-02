package db;

public class Character_capacities {
	public int numeric_mode;
	public int alphanumeric_mode;
	public int byte_mode;
	public int kanji_mode;
	/*
	 * Method initial for constructor
	 */
	public Character_capacities(){
		System.out.println("This is constructor for Character_capacities class");
	}
	/*
	 * Method to create data
	 */
	public void init(int numeric_mode, int alphanumeric_mode, int byte_mode, int kanji_mode){
		this.alphanumeric_mode = alphanumeric_mode;
		this.byte_mode = byte_mode;
		this.kanji_mode = kanji_mode;
		this.numeric_mode = numeric_mode;
	}
	/*
	 * Method printDb
	 */
	public void printDb(){
		System.out.println("This is printDb method for Character_capacities class");
		System.out.format("numeric_mode: %d\n",this.numeric_mode);
		System.out.format("alphanumeric_mode: %d\n",this.alphanumeric_mode);
		System.out.format("byte_mode: %d\n",this.byte_mode);
		System.out.format("kanji_mode: %d\n",this.kanji_mode);
	}
	/*
	 * Method getName
	 */
	public String getName(){
		String className = this.getClass().getName();
		return className;
	}
}
