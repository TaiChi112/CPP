echo "Select you file which you want to git stage"
read file
git add $file

echo "Enter commit message"
read message
git commit -m "$message"

echo "Do you want to push changes immediately? (y/n)"
read -p "> " PUSH

if [[ $PUSH == "y" || $PUSH == "Y" ]]; then
    # Push changes to GitHub
    git push origin $(git rev-parse --abbrev-ref HEAD)
    echo "Changes pushed to GitHub."
else
    echo "Changes staged and committed. You can push changes later."
fi
