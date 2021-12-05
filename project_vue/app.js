const app = Vue.createApp({
    data(){
        return{
            courseGoal: "finish and learn Vue js",
            vuelink:"https://vuejs.org/v2/guide/",
            status:"",
            counter:0,
            name:""
        }
    },
    methods:{
        outputGoal(){
            const num = Math.random();
            if (num<0.5){
               return 'loser';
            }
            else {
                return 'winner';
            }
        },
        increment(){
            this.counter++;
        },
        decrement(){
            this.counter--;
        },
        setName(){
            this.name = event.target.value;
        },
        submitForm(){
            alert("Hello world");
        }
    }
});

app.mount("#user-goal");
