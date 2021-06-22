void insertion_sort(int a[N],int n)
{
    int i=0;
    int j=0;
    int v=0;
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0 && a[j]>v)
        {

            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=v;
    }
}
