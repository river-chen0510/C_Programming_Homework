echo "Building project..."

gcc -Wall -Wextra -g \
    main.c \
    module.c \
    module02.c \
    -o main.out

echo "Build completed successfully."