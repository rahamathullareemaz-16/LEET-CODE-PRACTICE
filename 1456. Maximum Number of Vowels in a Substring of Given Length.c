int maxVowels(char* s, int k) {
    int i;
    int l = strlen(s);
    int c = 0;
    for (i = 0; i < k; i++) {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' ||
            s[i] == 'u') {
            c++;
        }
    }
    int s1 = c;
    for (i = k; i < l; i++) {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' ||
            s[i] == 'u') {
            c++;
        }
        if (s[i - k ] == 'a' || s[i - k ] == 'i' || s[i - k ] == 'e' ||
            s[i - k ] == 'o' || s[i - k ] == 'u') {
            c--;
        }
        if (c > s1) {
            s1 = c;
        }
    }

    return s1;
}
