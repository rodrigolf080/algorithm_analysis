import(
    "fmt"
    "strings"
)

func reverse(value string) string {
    // Convert string to rune slice.
    // ... This method works on the level of runes, not bytes.
    data := []rune(value)
    result := []rune{}

    // Add runes in reverse order.
    for i := len(data) - 1; i >= 0; i-- {
        result = append(result, data[i])
    }

    // Return new string.
    return string(result)
}

func licenseKeyFormatting(s string, k int) string {
    var key string
    
    // remove dashes
    key = strings.Replace(s, "-", "", -1)
    // make it uppercase
    key = strings.ToUpper(key)
    // split string into k length dash separated string
    key = reverse(key)
    var buffer string
    for i := 0; i< len(key); i += k{
        if len(key) - i >= 4 {
            for ii := i; ii < i+k; ii++{
                buffer += string(key[ii])
            } 
        } else {
            for ii := len(key) - i; ii < len(key); i++{
                buffer += string(key[ii])
            }
        }
        buffer += "-"

    }
    
    key = reverse(buffer)
    var formattedKey string
    
    for i := 0; i < len(key) - 1; i++{
        formattedKey += string(key[i + 1])
    }
    
    return formattedKey
}
