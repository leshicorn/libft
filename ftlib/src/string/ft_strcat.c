char* ft_strcat(char* dest, char* src)
{
    char* dest_copy = dest;

    while (*dest) ++dest;
    
    while (*src)
    {
        *dest = *src;
        ++src;
        ++dest;
    }
    *dest = '\0';
    
    return dest_copy;
}