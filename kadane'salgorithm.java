import java.util.HashMap;

class kadane{
    public static void main(String[] args) {
        try{
        HashMap<Integer,Integer> map=new HashMap<>();

        int[] arr={1,6,3,9,0};
        
        for(int i=0;i<arr.length;i++){
            map.putIfAbsent(arr[i], 0);
            map.put(arr[i], map.get(arr[i])+1)  ;
                if(map.get(arr[i])>1){System.out.println("True");return;}
        }
        System.out.println("False");;   
    }
    catch(Exception e){System.out.println(e);}
    }
}