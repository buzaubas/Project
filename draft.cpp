#pagama once
#include <iostream>

class entry
{
private:
    std::string ip;           // The IP address of the client’s host machine.
    std::string username;     // The authenticated client username. A hyphen (-) means no authentication was required.
    std::string request_date; // The date and time of the client request, enclosed in brackets.
    std::string request_line; // The request line, enclosed in quotes.
    size_t reply_code;        // The proxy response status code (HTTP reply code).
    size_t reply_length;      // The length of the Traffic Server response to the client in bytes.
    std::string request_site; // The site
    std::string device_info;  // Info about device that sent request
public:
    entry();
    entry(std::string chi, std::string caun, std::string cqtn, std::string cqtx, size_t pssc, size_t pscl);
    entry(const char* str);
    void set_chi();
    void set_caun();
    void set_cqtn();
    void set_cqtx();
    void set_pssc();
    void set_pscl();

    std::string get
};
