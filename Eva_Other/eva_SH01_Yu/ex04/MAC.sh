#!/bin/sh
ifconfig -a | grep -o -E 'ether \K([a-fA-F0-9\:]++)'
# // ไม่เข้าใจ \K([a-fA-F0-9\:] คืออะไร ?
# grep คือการค้นหาบรรทัดใน Files ทีตรงเงื่อนไข]

ether
ifconfig -a | grep ether | awk '{print $2}'
ifconfig -a | grep ether | awk '{print $2}'
 
