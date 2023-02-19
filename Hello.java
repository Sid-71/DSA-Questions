import java.util.*;

class Hello {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String inputString = sc.nextLine();
        String outputString = "";
        String newAdd = "";
       
        if(!(inputString == "")){
            int count = 1;
            for(int i=0; i<inputString.length(); i++){
                count =1;
                while(i < inputString.length()-1 && inputString.charAt(i)==inputString.charAt(i+1)){
                    count++;
                    i++;
                }
                
                if(count > 9){
                    while(count>9){
                    count = count-9;
                    newAdd = newAdd+"9"+inputString.charAt(i);
                    } 
                    
                    outputString = outputString+newAdd+count+inputString.charAt(i);
                }else{
                    outputString = outputString+count+inputString.charAt(i);
                }
            }
            
            System.out.println(outputString);
            
        }
        
        }
}