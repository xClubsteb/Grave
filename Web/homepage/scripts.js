let link_btn_github = document.getElementById("link-github");
let link_btn_twitch = document.getElementById("link-twitch");
let tag_btn = document.getElementById("tag");
let link_btn_osu = document.getElementById("link-osu");

link_btn_github.addEventListener('click', () => {
    const text = "https://github.com/xClubsteb";
    navigator.clipboard.writeText(text)
    .then(() => {
        console.log("Copied successfully!");
    })
    .catch(err => {
        console.error("Failed to copy: ", err);
    });
});

link_btn_twitch.addEventListener('click', () => {
    const text = "https://www.twitch.tv/xclubsteb";
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

link_btn_osu.addEventListener('click', () => {
    const text = "https://osu.ppy.sh/users/38296454";
    navigator.clipboard.writeText(text)
    .then(() => {
    console.log("Copied successfully!");
    })
    .catch(err => {
        console.error("Failed to copy: ", err);
    });
});