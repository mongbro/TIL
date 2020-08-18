public class practice0301_1 {
	
	static int[] makeArray() {			//int형 배열의 메소드
		int temp[] = new int[4];
		for(int i = 0; i < temp.length; i++) {
			temp[i] = i;
		}
		return temp;					//temp배열을 반환
	}
	
	public static void main(String[] args) {
		int intArray[];
		intArray = makeArray();			//intArray[] => temp[]
		for(int i = 0; i < intArray.length; i++) {
			System.out.print(intArray[i] + " ");
		}
	}
}