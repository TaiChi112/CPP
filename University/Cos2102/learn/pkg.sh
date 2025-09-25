for manager in apt yum dnf brew pacman snap choco winget scoop npm pip gem cargo; do
    if command -v $manager > /dev/null; then
        echo "$manager is installed"
    else
        echo "$manager is not installed"
    fi
done
