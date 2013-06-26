void mymatrix(double *a, int *ra, int *ca)
{
    int i,j;

    for (i=0; i< *ra; i++) {
        for (j=0; j< *ca; j++){
            a[i*(*ca)+j] +=3;
        }
    }
}

