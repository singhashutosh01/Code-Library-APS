void merge(int a[N],int b[N],int c[N],int p,int q)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<p&&j<q)
    {
        if(b[i]<=c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;

    }

    if(i==p)
    {
        while(k<(p+q))
        {
            a[k]=c[j];
            k++;
            j++;
        }
    }
    else{
            while(k<(p+q))
            {
            a[k]=b[i];
            k++;
            i++;
            }

        }

}
