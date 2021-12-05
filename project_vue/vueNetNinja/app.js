const app = Vue.createApp({
    data() {
        return {
            url:'https://www.google.com',
            showBooks:true,
            books:[
                {title:"harry potter",author:"patrick"},
                {title:"captain underpants",author:"new captain"},
                {title:"money heist",author:"professor"}
            ]
        }
    },
    methods: {
        toggleShowBooks(){
            this.showBooks = !this.showBooks
        }
    },
});
app.mount("#app");