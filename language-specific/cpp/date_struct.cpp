// Pseudo Code
struct date_struct {
    BYTE day   : 5,   // 1 to 31
         month : 4,   // 1 to 12
        year  : 12;  // 0 to 4095
    } date;

dateptr = &date;
dateptr->day = 25
dateptr->month = 12
dateptr->year = 1852;
