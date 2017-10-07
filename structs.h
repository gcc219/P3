#ifndef STRUCTS_H
#define STRUCTS_H

/*
 *
 * Define page/sector structures here as well as utility structures
 * such as directory entries.
 *
 * Sectors/Pages are 512 bytes
 * The filesystem is 4 megabytes in size.
 * You will have 8K pages total.
 *
 */


//Addresses only need to be 2 bytes since we have 8192 total sectors
#define DEFAULT_BLOCK_SIZE 512
#define MAX_FILENAME_LENGTH 8
struct super_block
{
	int magicNumber;
	unsigned char block_size;
	unsigned short inode_count;
	unsigned short free_block_count;
};

{
	mode_t mode;
	unsigned short inode_number;
	off_t size;
	char db_addresses[24]; //12 addresses, 2 bytes each, 10 direct, 1 indirect, 1 double indirect
	time_t createTime;
	time_t modTime;
	time_t accessTime;
	short numLinks;
};
struct directory_record
{
	char filename[MAX_FILENAME_LENGTH];
	unsigned short inode_number;
}

struct bitmap
{
	
};
struct indirect_block
{
	//This probably (definitely) doesn't need to be a struct?
	char db_addresses[512]
};

#endif
