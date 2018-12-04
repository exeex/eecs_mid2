


void permute(char a[], int i, int n)
{
    int j;
    if (i == n)                  // If we've chosen all the characters then:
       cout << a << endl;        // we're done, so output it
    else
    {
        for (j = i; j <= n; j++) // Otherwise, we've chosen characters a[0] to a[j-1]
        {                        // so let's try all possible characters for a[j]
            swap(a[i], a[j]);    // Choose which one out of a[j] to a[n] you will choose
            permute(a, i+1, n);  // Choose the remaining letters
            swap(a[i], a[j]);    // Undo the previous swap so we can choose the next possibility for a[j]
        }
    }
}