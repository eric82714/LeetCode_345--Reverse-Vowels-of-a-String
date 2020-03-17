int find(char s[], char t){
    for(int i = 0; i < 10; i++)
        if(s[i] == t) return 1;
    return 0;
}

char * reverseVowels(char * s){
    char vowels[12] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
    int i = 0, j = strlen(s)-1;
        
    while(i < j){
        if(find(vowels, *(s+i)) == 0) i += 1;
        if(find(vowels, *(s+j)) == 0) j -= 1;
        
        if(find(vowels, *(s+i)) == 1 && find(vowels, *(s+j)) == 1){
            char tmp = *(s+i);
            *(s+i) = *(s+j);
            *(s+j) = tmp;
            i += 1;
            j -= 1;
        }
    }
                
    return s;
}
