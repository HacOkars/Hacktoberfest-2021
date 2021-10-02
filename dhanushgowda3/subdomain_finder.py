#imports and some shitttt
import time
import sys
import urllib3
import requests
import argparse
version = 2.2

#bannerrrr
def banner():
    print("""
    
    _    _     _ ______     _______ _____ ______  _____      ______________  
   | |  | |   | (____  \   (_______|_____)  ___ \(____ \    (_______(_____ \ 
    \ \ | |   | |____)  )   _____     _  | |   | |_   \ \      ____  _____) )
     \ \| |   | |  __  (   |  ___)   | | | |   | | |   | |    (___ \(_____ ( 
 _____) ) |___| | |__)  )  | |      _| |_| |   | | |__/ /    _____) )     | |
(______/ \______|______/   |_|     (_____)_|   |_|_____/    (______/      |_|  v1.0
 """ )
    print("                   Coded by Dhanush K Gowda - @dhanushgowda3")


def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument('-d','--domain', type=str, help='Target Domain', required=True)
    parser.add_argument('-o','--output',type=str,help='Output file')
    return parser.parse_args()

def parse_url(url):
    try:
      host = urllib3.util.url.parse_url(url).host
    except Exception as e:
        print ("[*]Invalid domain, try again...")
        sys.exit(1)
    return host

def write_subs_to_file(subdomain,output_file):
    with open(output_file, 'a') as fp:
        fp.write(subdomain + '/n')
        fp.close()

def main():
    banner()
    print("Finding.....")
    subdomains = []
    args = parse_args()
    target = parse_url(args.domain)
    output = args.output

    req = requests.get(f'https://crt.sh/?q=%.{target}&output=json')

    if req.status_code != 200:
        print("Sorry information is not available")
        sys.exit(1)

    for (key, value) in enumerate(req.json()):
        subdomains.append(value['name_value'])

    print(f"\n[!] ****** TARGET: {target} ****** [!] \n")

    subs = sorted(set(subdomains))

    for s in subs:
        print(f'[*] {s}\n')
        if output is not None:
            write_subs_to_file(s, output)

    print("\n\n[**] Sunfind3r is complete, all subdomains have been found.")


if __name__ == '__main__':
    main()




