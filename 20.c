

int contaPal (char s[]) {
    int i;
    int resp = 0;
    for(i=0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i+1] == '\0') resp++;
        while (s[i] == ' ') {
            if (s[i+1] != ' ') break;
            else i++;
        }
    }
    if ( s1[0] == ' ' && s1 [strlen(s1)] == ' ') resp -= 1;
    else resp;
    return resp;
}

// 9/10