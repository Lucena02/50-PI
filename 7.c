char *mystrcat (char s1[], char s2[]) {
    int i;
    for (i=0;s1 [i] != '\0'; i++) ;
    int r;
    for (r=0;s2 [r] != '\0';r++) {
        s1 [i] = s2 [r];
        i++;
    }
    s1 [i] = '\0';
}

