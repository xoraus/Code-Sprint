public class Solution {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int litr[]=new int [n];
        int km[]=new int [n];
        long cap_value[]=new long[n];
        for(int i=0;i<n;i++){
            litr[i]=in.nextInt();
            km[i]=in.nextInt();
            cap_value[i]=(litr[i]-km[i]);
        }
       int pos=0;
        for(int i=0;i<n;i++){
             long ptl=0;int check=0;
            for(int j=0;j<n;j++){
            ptl+=cap_value[(j+pos)%n];
            if(ptl<0){++pos;check=-9;break;}
            }
            if(check==0){System.out.print(pos);break;}
        }
    }
}