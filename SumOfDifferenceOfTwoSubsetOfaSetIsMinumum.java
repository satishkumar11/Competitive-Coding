import java.util.*;
class SumOfDifferenceOfTwoSubsetOfaSetIsMinumum {
    public static void main(String ... args){
        int a[] = new int[1000];
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0 ; i<n ; i++){
            a[i] = sc.nextInt();
        }
        System.out.println(findMin(a,n));
    }

    public static int findMin(int a[] , int n){
        int totalSum = 0;
        for(int i=0 ; i<n ; i++){
            totalSum+=a[i];
        }
        return findMinRecursive(a,n,0,totalSum);
    }

    public static int findMinRecursive(int a[] , int i , int sumCalculated , int totalSum){
        if(i == 0){
            return Math.abs((totalSum-sumCalculated)-sumCalculated);
        }
        return Math.min(findMinRecursive(a,i-1,sumCalculated+a[i],totalSum) , findMinRecursive(a , i-1, sumCalculated,totalSum));
    }
}