public class Inserting{
	public static void main(String[] args){
		int data[] = {1,4,6,8,13,23,52,64,76,87,100};
    System.out.println("Main Array");
    for(int i=0;i<11;i++){
        System.out.println(data[i]);
    }
    for(int i=0;i<11;i++){
        if(data[i]<54 && data[i+1]>54){
				for(int j = 10;j>i;j--){
					data[j+1]= data[j];
				}
				data[i+1]= 54;
				break;
			}
    }
     System.out.println("After inserting 54");
    for(int i=0;i<12;i++){
        System.out.println(data[i]);
    }

    for(int i=11;i>=4;i--){
        data[i+1]= data[i];
    }
    data[4]=99;
    System.out.println("After inserting 99 to fifth position");
    for(int i=0;i<13;i++){
        System.out.println(data[i]);
    }

	}
}