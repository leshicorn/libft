char* ft_strcpy(char* dest, char* src)
{
    char* dest_copy = dest;

    while(*src)
    {
        *dest = *src;
        ++src;
        ++dest;
    }
    *dest = 0;
    
    return dest_copy;
}