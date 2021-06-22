void bubble_sort(int a[N],int n)
{
    int i=0;
    int j=0;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
            }
        }
    }
}
