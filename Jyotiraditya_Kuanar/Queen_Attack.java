import java.util.*;
import java.io.*;
class Solution
{   public static void main(String args[])
	{
			try{
				Scanner sc = new Scanner(System.in);
			int k=0;
			int n=sc.nextInt();
			int m=sc.nextInt();
			int arr[][]=new int[n][n];
			if(n>=0 && n<=100000 && m>=0 && m<=100000)
			{
				int rq=sc.nextInt();
				int cq=sc.nextInt();
				arr[rq-1][cq-1]=1;
					for(int i=1;i<=m;i++)
					{
						int r=sc.nextInt();
						int q=sc.nextInt();
						arr[r-1][q-1]=1;
					}
					for(int j=cq+1;j<=n;j++)
					{
						if(arr[rq-1][j-1]!=0)
							break;
						else
							k++;
					}
					for(int j=cq-1;j>=1;j--)
					{
						if(arr[rq-1][j-1]!=0)
							break;
						else
							k++;
					}
					for(int j=rq+1;j<=n;j++)
					{
						if(arr[j-1][cq-1]!=0)
							break;
						else
							k++;
					}
					for(int j=rq-1;j>=1;j--)
					{
						if(arr[j-1][cq-1]!=0)
							break;
						else
							k++;
					}
					int j=rq-1,i=cq-1;
					while(true)
					{
						j++;i++;
						if(j>=n || i>=n)
							break;
						else if(arr[j][i]!=0)
							break;
						else
							k++;
					}
					j=rq-1;i=cq-1;
					while(true)
					{
						i--;j--;
						if(j<0 || i<0)
							break;
						else if(arr[j][i]!=0)
							break;
						else
							k++;
					}
					j=rq-1;i=cq-1;
					while(true)
					{
						j++;i--;
						if(j>=n || i<0)
							break;
						else if(arr[j-1][i-1]!=0)
							break;
						else
							k++;
					}
					j=rq-1;i=cq-1;
					while(true)
					{
						j--;i++;
						if(j<0 || i>=n)
							break;
						else if(arr[j][i]!=0)
							break;
						else
							k++;
					}
				
				System.out.println(k);
			}
			}catch(Exception e){}
	}
}