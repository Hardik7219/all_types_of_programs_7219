import React, { useState, useEffect } from "react";
import Typing from "./Typing";
import './All.css';
const images = [
    "https://i.pinimg.com/1200x/51/1e/1f/511e1ff114529500f48026235088309c.jpg",
    "https://i.pinimg.com/1200x/cb/78/2a/cb782a18a8312a622f04582d9dd389fc.jpg",
    "https://i.pinimg.com/736x/e1/c4/d4/e1c4d4260c5ee35f89441fa60ba44f5d.jpg",
    "https://i.pinimg.com/736x/46/7d/08/467d08dba34a3cb4b23a8586dfc52ca0.jpg",
];

export default function Second() {
    const [current, setCurrent] = useState(0);

  // Auto slide every 3 seconds
    useEffect(() => {
        const interval = setInterval(() => {
            nextSlide();
        }, 2000);
        return () => clearInterval(interval);
    }, []);

    const nextSlide = () => {
        setCurrent((prev) => (prev + 1) % images.length);
    };

    return (
    <>
        <div className="flex flex-col justify-center items-center gap-4">

            <div id="box1" className="relative w-[200px] h-[300px] overflow-hidden rounded-2xl shadow-lg mx-auto mt-10">
                {images.map((img, index) => (
                    <img
                        key={index}
                        src={img}
                        alt={`Slide ${index}`}
                        className={`absolute w-full h-full object-cover transition-opacity duration-700 ease-in-out ${
                        index === current ? "opacity-100" : "opacity-0"
                        }`}
                    />
                ))}


            </div>
            <div className='bg-yellow-300 w-90 h-50 rounded-2xl border-l-4 border-l-orange-500
                flex items-center border-r-4 border-r-orange-500
                justify-center text-white'>
                <div className="flex h-30 w-45 text-center">
                <Typing msg="WISHING YOU VERY VERY HAPPY BIRTHDAY BHAI" size="2xl"></Typing>
                </div>
            </div>
            <audio src="https://res.cloudinary.com/dashznu2p/video/upload/v1760783190/FRIENDSHIP_MASHUP_-_2024_Prathmesh_Bari_Friendship_Day_Special_Bollywood_Lofi_Chill_-_Prathmesh_Bari_uwrkjc.mp3" autoPlay loop hidden></audio>
        </div>
    </>

    );
}
