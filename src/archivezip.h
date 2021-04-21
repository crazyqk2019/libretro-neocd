#ifndef ARCHIVEZIP_H
#define ARCHIVEZIP_H

#include <string>
#include <vector>

namespace ArchiveZip
{
    std::vector<std::string> getFileList(const std::string& archiveFilename);

    bool readFile(const std::string &archive, const std::string &filename, void *buffer, size_t maximumSize, size_t *reallyRead);
};

#endif // ARCHIVEZIP_H
