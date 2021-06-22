void heapsort(int a[N],int n)
{
    int i=n/2;
    int k=0;
    int j=0;
    int heap=0;
    int v=0;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=a[k];
        heap=0;
        while(!heap && 2*k<=n)
        {
            j=2*k;
            if(j<n)
            {
                if(a[j]<a[j+1])
                {
                    j=j+1;
                }

               if(v>=a[j])
               {
                   heap=1;
               }

               else
               {
                   a[k]=a[j];
                   k=j;
               }
               a[k]=v;
            }
        }
    }
}
