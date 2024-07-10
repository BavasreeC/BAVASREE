
create database bookcatalog;
use bookcatalog;
CREATE TABLE Categories (
    CategoryId INT PRIMARY KEY,
    CategoryName VARCHAR(255) NOT NULL UNIQUE
);
CREATE TABLE Publishers (
    PublisherId INT PRIMARY KEY,
    PublisherName VARCHAR(255) NOT NULL
);
CREATE TABLE Users (
    UserId INT PRIMARY KEY,
    Username VARCHAR(255) NOT NULL,
    Email VARCHAR(255) NOT NULL UNIQUE,
    PhoneNumber VARCHAR(15) NOT NULL UNIQUE
);
CREATE TABLE Books (
    BookId INT PRIMARY KEY,
    Title VARCHAR(255) NOT NULL,
    ISBN VARCHAR(13) NOT NULL UNIQUE,
    PublicationYear INT NOT NULL,
    PublisherId INT,
    CategoryId INT,
    AuthorName VARCHAR(255) NOT NULL CHECK (AuthorName != ''),
    FOREIGN KEY (PublisherId) REFERENCES Publishers(PublisherId) ON DELETE CASCADE,
    FOREIGN KEY (CategoryId) REFERENCES Categories(CategoryId) ON DELETE CASCADE
);
CREATE TABLE Borrowings (
    BorrowId INT PRIMARY KEY,
    UserId INT,
    BookId INT,
    BorrowDate DATE NOT NULL,
    ReturnDate DATE NOT NULL,
    FOREIGN KEY (UserId) REFERENCES Users(UserId) ON DELETE CASCADE,
    FOREIGN KEY (BookId) REFERENCES Books(BookId) ON DELETE CASCADE
);
 

 
