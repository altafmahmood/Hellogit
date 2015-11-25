class Prime{
	public static void main(String s[]){
		int num,i,count=0;
		num=Integer.parseInt(s[1]);

		for (i=2; i<num/2; i++) {
			if(num%i==0)
				count++;
		}

		if(count == 0)
			System.out.println("The number ", + num +, " is Prime ");
		else
			System.out.println("The number ", + num +, " is no Prime ");
	}
}