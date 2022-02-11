import importlib
from sys import stderr, stdin, stdout
from paramiko import SSHClient,AutoAddPolicy
import time
# Create Client
client = SSHClient()
# load host policy
client.set_missing_host_key_policy(AutoAddPolicy())

# connection
try:
    client.connect('localhost',username='root',password='010823')
    print(f"Login to Server.....")
    stdin,stdout,stderr = client.exec_command('ls -al /home')
    lines = stdout.readlines()
    stdin,stdout,stderr = client.exec_command('pwd')
    for i in lines:
        print(i)
    sftp_client = client.open_sftp()
    remote_files = sftp_client.open("/root",'r+')
    print(remote_files)
except Exception as Error:
    print(str(Error))