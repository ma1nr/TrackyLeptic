# Data Structures and Models

## Structs

### User
```c
struct User {
    int id;
    char name[50];
    char email[100];
};
```

### Post
```c
struct Post {
    int postId;
    int userId;
    char content[500];
    time_t createdAt;
};
```

## Enums

### UserType
```c
typedef enum {
    ADMIN,
    USER,
    GUEST
} UserType;
```
