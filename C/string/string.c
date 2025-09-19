#include <stdio.h>
#include <stdlib.h>

/*
README

My small "library" of functions for working with strings
without using <string.h> and writing them all manually
with addiction of some other functions

Why I made it:
    I was bored in uni on some lectures and this is result 
    of that
*/

size_t str_len(char* str);
char* str_reverse_full(char* str);
char* str_upper(char* str);
char* str_lower(char* str);
char char_upper(char c);
char char_lower(char c);
size_t contains(char* str, char* sub_str);
char* compress(char* str);
char* strip(char* str);
//count, replace, strip, split, compress

//extra diff
// get_string()


int main()
{
    char* str = "bob  g   ";
    char* sub_str = "hello";
    
    printf("input: %s\n", str);
    printf("reversed: %s\n", str_reverse_full(str));
    printf("len = %lu\n", str_len(str));
    printf("to_up: %s\n", str_upper(str));
    printf("to_low: %s\n", str_lower(str));
    printf("sub str: %lu\n", contains(str, sub_str));
    printf("compress: %s\n", compress(str));
    printf("strip: %s\n", strip(str));

    //free(str);
    //you thought I would free? Fool! 
    return 0;
}

size_t str_len(char* str) {
    size_t length = 0;
    int k;

    for (k = 0; str[k] != '\0'; k++) {
        length++;
    }
    return length;
}

char* str_reverse_full(char* str) {
    size_t length = str_len(str);
    size_t reversed_index = length - 1;
    int k;
    
    char* new_str = malloc((length * sizeof(char)) + 1);
    if (new_str == NULL){
        return NULL;
    }

    for (k = 0; k < length; k++) {
        new_str[reversed_index] = str[k];
        reversed_index--;
    }
    new_str[length] = '\0';
    return new_str;
}

char* str_upper(char* str){
    size_t length = str_len(str);
    int index;
    
    char* new_str = malloc((length * sizeof(char)) + 1);
    if (new_str == NULL){
        return NULL;
    }
    
    for (index = 0; index < length; index++) {
        new_str[index] = char_upper(str[index]);
    }
    new_str[length] = '\0';
    return new_str;
}

char* str_lower(char* str){
    size_t length = str_len(str);
    int index;
    
    char* new_str = malloc((length * sizeof(char)) + 1);
    if (new_str == NULL){
        return NULL;
    }
    
    for (index = 0; index < length; index++) {
        new_str[index] = char_lower(str[index]);
    }
    new_str[length] = '\0';
    return new_str;
}

char char_upper(char c){
    if (c >= 97 && c <= 122) {
        return (char) c - 32;
    }
    return c;
}

char char_lower(char c){
    if (c >= 65 && c <= 90) {
        return (char) c + 32;
    }
    return c;
}

size_t str_count(char* str, char* sub_str){
    size_t sub_str_len = str_len(sub_str);
    size_t count = 0;
    //TODO
}

char* replace(){
//TODO
}

size_t contains(char* str, char* sub_str){
    size_t c_index = 0;
    size_t j;
    size_t length = str_len(str);
    size_t req_length = str_len(sub_str);
    size_t found_length = 0;
    
    size_t flag = 0;
    
    for (j = 0; j < length; j++){
        if (str[j] == sub_str[0] && !flag){
            flag = 1;
            found_length++;
            continue;
        }
        
        if (!flag) {
            continue;
        }
        
        if (found_length == req_length){
            return 1lu;
        }
        
        if (str[j] == sub_str[found_length]) {
            found_length++;
            continue;
        }
        else{
            found_length = 0;
            continue;
        }
    }
    return 0lu;
}

char* compress(char* str){
    size_t length = str_len(str);
    char* new_str = malloc(sizeof(char) * length + 1);
    size_t j;
    size_t k = 0;
    
    if (new_str == NULL){
        return NULL;
    }
    
    for (j = 0; j < length; j++){
        if (str[j] == ' '){
            continue;
        }
        else{
            new_str[k] = str[j];
            k++;
        }
    }
    new_str[k] = '\0';
    return new_str;
}

char* strip(char* str){

    //TODO: unfinished functionality / doesn't work
    
    size_t length = str_len(str);
    char* new_str = malloc((sizeof(char) * length) + 1);
    if (new_str == NULL){
        return NULL;
    }
    
    for (size_t j = length; j > 0; j--){
        if (str[j] != ' '){
            break;
        }
        length--;
    }
    
    printf("strip_new_len: %lu\n", length);
    
    for (size_t j = 0; j < length; j++){
        if (str[j] != ' '){
        
            break;
        }
    }
    
    return new_str;
}