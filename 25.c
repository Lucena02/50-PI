


int limpaEspacos (char t[]) {
    int i = 0;
    int j = 0;
    while(t[j] != '\0') {
        t[i] = t[j];
        while (t[j] == ' ' && t[j+1] == ' ') j++;
        i++;
        j++;
    }
    t[i] = '\0';
    return i;
}


// depois ver