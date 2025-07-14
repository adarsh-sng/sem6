

## module 2
## 14 July 2025

## Introdction to security groups
- Security groups act as virtual firewalls for your Amazon EC2 instances to control inbound and outbound traffic.
- They allow you to specify rules that determine which traffic is allowed or denied based on protocols, ports, and source/destination IP addresses.
- Security groups are stateful, meaning if you allow an incoming request, the response is automatically allowed, regardless of outbound rules.
- They regulate :
    - Access to Ports
    - authorized IP Ranges - Ipv4 and Ipv6
    - Control of inbound networl(from other to the instance)
    - Control of outbound network(from the instance to other)

|Type|Protocol|Port Range|Source/Destination|
|---|---|---|---|
|SSH|TCP|22|
|HTTP|TCP|80|
|HTTPS|TCP|443|
|Custom TCP Rule|TCP|<port number>|<IP address or CIDR block>|

### Security group diagram
![alt text](./utils/security-group-diagram.png)

## Classical ports to know
- **SSH**: Port 22 (used for secure shell access)
- **HTTP**: Port 80 (used for web traffic)
- **HTTPS**: Port 443 (used for secure web traffic) 
- **RDP**: Port 3389 (used for remote desktop protocol) 
- **FTP**: Port 21 (used for file transfer protocol)
- **SFTP**: Port 22 (used for secure file transfer protocol)


