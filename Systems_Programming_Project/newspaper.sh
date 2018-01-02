sudo apt-get install figlet
sudo apt-get install lynx
#content=$(curl -L mef.edu.tr)

#echo $content >> "$(date +"Newspaper %d_%m").txt"

#curl "http://lite.cnn.io/en" >> "$(date +"Newspaper %d_%m").txt"

#wget -qO- http://lite.cnn.io/en | sed -e 's/<[^>]*>//g;s/^ //g' >> "$(date +"Newspaper %d_%m").txt"
echo $(date +"%m-%d-%Y") >> "$(date +"Newspaper %d_%m").txt"
curl wttr.in/Istanbul?T?q?0?n >> "$(date +"Newspaper %d_%m").txt"
figlet 'MEF DAILY' >> "$(date +"Newspaper %d_%m").txt"
lynx -dump http://lite.cnn.io/en >> "$(date +"Newspaper %d_%m").txt"





