public class practice0301_1 {
	
	static int[] makeArray() {			//int�� �迭�� �޼ҵ�
		int temp[] = new int[4];
		for(int i = 0; i < temp.length; i++) {
			temp[i] = i;
		}
		return temp;					//temp�迭�� ��ȯ
	}
	
	public static void main(String[] args) {
		int intArray[];
		intArray = makeArray();			//intArray[] => temp[]
		for(int i = 0; i < intArray.length; i++) {
			System.out.print(intArray[i] + " ");
		}
	}
}