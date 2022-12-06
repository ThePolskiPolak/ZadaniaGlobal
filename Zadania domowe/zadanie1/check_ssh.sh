#!/usr/bin/env bash

ssh 192.168.56.123 exit 0

if [[ $? == 0 ]];
then
    echo "Polaczenie jest mozliwe"
else
    echo "Polaczenie nie jest mozliwe"
fi

exit 0
