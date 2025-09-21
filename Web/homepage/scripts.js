let link_btn = document.getElementById("link");
let tag_btn = document.getElementById("tag");

link_btn.addEventListener('click', () => {
    const text = "https://github.com/xClubsteb";
    navigator.clipboard.writeText(text)
    .then(() => {
        console.log("Copied successfully!");
    })
    .catch(err => {
        console.error("Failed to copy: ", err);
    });
});

tag_btn.addEventListener('click', () => {
    const text = "xclubsteb";
    navigator.clipboard.writeText(text)
    .then(() => {
        console.log("Copied successfully!");
    })
    .catch(err => {
        console.error("Failed to copy: ", err);
    });
});