#include <string>
#include <sstream>

std::string problemSolution4(const std::string & macAddress) {
    std::string result;
    if (macAddress.substr(0,2)=="FF"){
        result="Broadcast";
    }
    else if(macAddress[1]=='0' or macAddress[1]=='2' or macAddress[1]=='4' or macAddress[1]=='6' or
    macAddress[1]=='8' or macAddress[1]=='A' or macAddress[1]=='C' or macAddress[1]=='E'){
        result="Unicast";
    }
    else{
        result="Multicast";
    }
    return result;
}
