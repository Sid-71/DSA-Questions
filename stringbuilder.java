 class stringbuilder {

    public static void main(String args[])
    {
        StringBuilder sb = new StringBuilder("hackveda");
      // to print character at index i

        System.out.println(sb.charAt(3));
     

        //to set a character
        sb.setCharAt(0, 'a');
        System.out.println(sb);
        
        // for reversing the string

        sb.reverse();
        System.out.println(sb);
       
        String s = sb.substring(1, 3);
         System.out.println(s);
       
         // hackveda -- hkackveda
        sb.insert(1, 'k');
        System.out.println(sb);

        // for deleteing [1,2)
        sb.delete(1, 2);
        System.out.println(sb);



       sb.append('s');
       System.out.println(sb);   
  
       sb.append("--devnash sir");
       System.out.println(sb);   
     
       
       
    }

}
